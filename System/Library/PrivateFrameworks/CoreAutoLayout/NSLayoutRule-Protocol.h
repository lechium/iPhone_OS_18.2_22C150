//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreAutoLayout/NSCopying-Protocol.h>
#import <CoreAutoLayout/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol NSLayoutRule <NSObject, NSCopying>
@property(readonly, copy) NSString *ruleDescription;
@property(readonly, copy) NSString *identifier;
- (NSArray *)makeChildRules;
@end
