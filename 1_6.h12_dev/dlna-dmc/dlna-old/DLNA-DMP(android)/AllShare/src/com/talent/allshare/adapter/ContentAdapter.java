package com.talent.allshare.adapter;

import java.util.List;

import org.cybergarage.util.CommonLog;
import org.cybergarage.util.LogFactory;

import com.talent.allshare.R;
import com.talent.allshare.network.Item;

import android.content.Context;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.TextView;


public class ContentAdapter extends BaseAdapter{

	private static final CommonLog log = LogFactory.createLog();
	
	private  List<Item> contentItem;
	private LayoutInflater mInflater;
	private Context mContext;
	
	public ContentAdapter(Context context, List<Item>  contentItem) {
		mInflater = LayoutInflater.from(context);
		this.contentItem = contentItem;
		mContext = context;
	}
	
	public void refreshData(List<Item>  contentItem)
	{
		this.contentItem = contentItem;
		notifyDataSetChanged();
	}

	public void clear()
	{
		if (contentItem != null){
			contentItem.clear();
			notifyDataSetChanged();
		}
	}
	/**
	 * The number of items in the list is determined by the number of
	 * speeches in our array.
	 * 
	 * @see android.widget.ListAdapter#getCount()
	 */
	public int getCount() {
		return contentItem.size();
	}

	/**
	 * Since the data comes from an array, just returning the index is
	 * sufficent to get at the data. If we were using a more complex data
	 * structure, we would return whatever object represents one row in the
	 * list.
	 * 
	 * @see android.widget.ListAdapter#getItem(int)
	 */
	public Object getItem(int position) {
		return contentItem.get(position);
	}

	/**
	 * Use the array index as a unique id.
	 * 
	 * @see android.widget.ListAdapter#getItemId(int)
	 */
	public long getItemId(int position) {
		return position;
	}

	/**
	 * Make a view to hold each row.
	 * 
	 * @see android.widget.ListAdapter#getView(int, android.view.View,
	 *      android.view.ViewGroup)
	 */

	public View getView(int position, View convertView, ViewGroup parent) {

		if (convertView == null) {
			convertView = mInflater.inflate(R.layout.content_list_item, null);
		}
		
		Item dataItem = (Item) getItem(position);
		TextView tvContent = (TextView)convertView.findViewById(R.id.tv_content);
		tvContent.setText(dataItem.getTitle());

		return convertView;
	}
}
