function Binary_Search( a,first,last,key)
{
  if (first <= last)
  {
      var mid = Math.round((first+last)/2);
       
      if (a[mid]==key)
      return mid;

      else if(a[mid]<key)
       return Binary_Search(a,mid+1,last,key);

      else
      return Binary_Search(a,first,mid-1,key);
  }
  
 return -1;
}

array=[1,5,9,23,36];
var el=36;
var b = Binary_Search(array,0,array.length,el);

if (b==-1)
 console.log(el+" Not Found!!");
 else 
 console.log(el +" found at position =>"+ ++b);