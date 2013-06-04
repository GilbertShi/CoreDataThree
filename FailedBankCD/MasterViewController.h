//
//  MasterViewController.h
//  FailedBankCD
//
//  Created by Gilbert on 6/3/13.
//  Copyright (c) 2013 Gilbert. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MasterViewController : UITableViewController

@property (nonatomic,strong) NSManagedObjectContext* managedObjectContext;

//@property (nonatomic,strong) NSArray *failedBankInfos;
@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;

@end
