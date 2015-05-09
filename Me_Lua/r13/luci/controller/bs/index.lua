module("luci.controller.bs.index", package.seeall)


local arpmon = require "meizu.arpmon"
local bfs    = require "meizu.bfs"

new_device_notify  = arpmon.new_device_notify

function index()
    local root = node()
	if not root.target then
		root.target = alias("bs")
		root.index = true
	end
    local page  = node("bs")
    --page.target = firstchild()
    page.title  = _("bs")
    page.order  = 10
    page.index  = true
	page = entry({"bs", "info"}, call("info"), nil, nil)
	page.leaf = true
	page = entry({"bs", "token"}, call("token"), nil, nil)
	page.leaf = true

	page = entry({"bs", "newdevicenotify"}, call("new_device_notify"), nil)
	page.leaf = true

	page = entry({"bs", "devip"}, call("devip"), nil, nil)
	page.leaf = true
	page = entry({"bs", "testip"}, call("testip"), nil, nil)
	page.leaf = true
	page = entry({"bs", "normip"}, call("normip"), nil, nil)
	page.leaf = true

	page = entry({"bs", "apk"}, call("apk"), nil)
	page.leaf = true
end

function info()
	luci.http.prepare_content("application/json")
    local result = bfs.sysinfo()
	luci.http.write_json(result)
end

function token()
	luci.http.prepare_content("application/json")
	local sauth = require "luci.sauth"
	local token = sauth.noAuthGetToken()
	if token then
		luci.http.write_json(token)
	end
end

function show_hosts()
	local lue = require"luci.util".exec
	local cmd = "cat /etc/hosts"
	local ret = lue(cmd)
	luci.http.write(ret)
end

function devip()
	local lue = require"luci.util".exec
	local cmd = "/usr/sbin/mzrts_ips.sh devip"
	local ret = lue(cmd)
	show_hosts()
end

function normip()
	local lue = require"luci.util".exec
	local cmd = "/usr/sbin/mzrts_ips.sh"
	local ret = lue(cmd)
	show_hosts()
end

function testip()
	local lue = require"luci.util".exec
	local cmd = "/usr/sbin/mzrts_ips.sh testip"
	local ret = lue(cmd)
	show_hosts()
end

function apk()
	local fn, fd, block
	local cmd = "ls /www/apk_download/apk/*.apk | awk '{printf $1}'"
	fd = io.popen(cmd)
	fn = fd:read("*l")
	fd:close()
	if fn ~= nil then
		fd = nixio.open(fn, "r")
		luci.http.header('Content-Disposition', 'attachment; filename="%s"' % {nixio.fs.basename(fn)})
		luci.http.prepare_content("application/octet-stream")
		while true do
			block = fd:read(nixio.const.buffersize)
			require "MZLog".log(3, debug.getinfo(1).currentline)
			if (not block) or (#block == 0) then
				require "MZLog".log(3, debug.getinfo(1).currentline)
				break
			else
				luci.http.write(block)
			end
		end
		fd:close()
	end
	luci.http.close()
end
