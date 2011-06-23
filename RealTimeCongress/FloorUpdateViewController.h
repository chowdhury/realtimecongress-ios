//
//  FloorUpdateViewController.h
//  RealTimeCongress
//
//  Created by Stephen Searles on 6/4/11.
//  Copyright 2011 Sunlight Labs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "SunlightLabsConnection.h"
@class FloorUpdate;

@interface FloorUpdateViewController : UITableViewController <UITableViewDataSource,UITableViewDelegate> {
    @private
    SunlightLabsConnection * connection;
    NSMutableArray * floorUpdates;
    NSUInteger page;
    UISegmentedControl * control;
}

@end
