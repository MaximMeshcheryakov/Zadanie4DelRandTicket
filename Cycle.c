Cycle()
{
	i=1;
	maxk=0;
	
	maxticket[1]=0;
	maxticket[2]=0;
	maxticket[3]=0;
	
	for(i;i<=3;i++){
		if(i==1) lr_output_message("user: jojo");
		if(i==2) lr_output_message("user: Batman");
		if(i==3) lr_output_message("user: Jack");
			lr_think_time(2);
		vuser_init();
			lr_think_time(2);
		Action();
			lr_think_time(2);
		maxticket[i]=maxk;
			lr_think_time(2);
		vuser_end();
	}
	
	
	lr_output_message("maxticket 1=%d",maxticket[1]);
	lr_output_message("maxticket 2=%d",maxticket[2]);
	lr_output_message("maxticket 3=%d",maxticket[3]);


	if((maxticket[1]>=maxticket[2]) && (maxticket[1]>=maxticket[3])){ // 1 > 2
			maxk=maxticket[1];
			lr_save_string("jojo","usernamedel");
			lr_save_string("bean","passworddel");		
			lr_output_message("username=%s",lr_eval_string("{usernamedel}"));			
		}else{
				if((maxticket[2]>=maxticket[3]) && (maxticket[2]>=maxticket[1])){ // 2 > 3
				maxk=maxticket[2];
				lr_save_string("Batman","usernamedel");
				lr_save_string("1","passworddel");
				lr_output_message("username=%s",lr_eval_string("{usernamedel}"));			
			}else{	
					if((maxticket[3]>=maxticket[2]) && (maxticket[3]>=maxticket[1])){ // 3 > 1
					maxk=maxticket[3];
					lr_save_string("Jack","usernamedel");
					lr_save_string("1","passworddel");
					lr_output_message("username=%s",lr_eval_string("{usernamedel}"));
				}
			}
		}
	
	lr_output_message("%d",maxk);
	DelTicket();
	

	return 0;
}
