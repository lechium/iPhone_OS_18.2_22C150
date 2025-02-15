//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INDateComponentsRange, INPerson, NSNumber, NSString;

@protocol INFilePropertyExport <NSObject, JSExport>
@property(copy, nonatomic) NSNumber *quantity;
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) INPerson *person;
@property(copy, nonatomic) INDateComponentsRange *dateComponentsRange;
@property(copy, nonatomic) NSString *type;
@property(copy, nonatomic) NSString *qualifier;
@property(copy, nonatomic) NSString *name;
- (id)init;
@end

