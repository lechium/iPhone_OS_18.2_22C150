//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBSelectionItem;

@protocol _INPBRefinementItem <NSObject>
@property(readonly, nonatomic) _Bool hasSubKeyPath;
@property(copy, nonatomic) NSString *subKeyPath;
@property(readonly, nonatomic) _Bool hasItem;
@property(retain, nonatomic) _INPBSelectionItem *item;
@end
