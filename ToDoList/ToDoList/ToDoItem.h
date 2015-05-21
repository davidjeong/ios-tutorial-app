//
//  ToDoItem.h
//  ToDoList
//
//  Created by David Jeong on 2015. 5. 20..
//
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
