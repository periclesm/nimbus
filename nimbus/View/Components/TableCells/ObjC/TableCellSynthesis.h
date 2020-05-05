//
//  TableCellSynthesis.h
//  nimbus
//
//  Created by Pericles Maravelakis on 02/07/2018.
//	periclesm@cloudfields.net
//	Licensed under Creative Commons Attribution-ShareAlike 4.0 International (CC BY-SA 4.0)
//	https://creativecommons.org/licenses/by-sa/4.0/
//

@interface TableCellSynthesis : NSObject

+ (cloudCell*)CloudCell:(UITableView*)tableView datasource:(NSArray*)datasource index:(NSIndexPath*)indexPath;

@end
