//
//  kTabView.h
//  TableViewWithButtons
//
//  Created by Karthik T on 9/28/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface IDTabView : NSTabView {
	
	id delegate;

}

-(void) setControllerDelegate:(id) delegate;

@end
