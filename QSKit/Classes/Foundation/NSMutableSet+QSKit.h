//
//  NSMutableSet+QSKit.h
//  Q Branch Standard Kit
//
//  Created by Brent Simmons on 10/25/13.
//  Copyright (c) 2013 Q Branch LLC. All rights reserved.
//


@import Foundation;


@interface NSMutableSet (QSKit)


/*Does nothing if obj == nil. No exception thrown.*/

- (void)qs_safeAddObject:(id)obj;


@end
