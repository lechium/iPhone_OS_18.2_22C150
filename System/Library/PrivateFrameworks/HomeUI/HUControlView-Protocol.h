//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class NSString;
@protocol HUControlViewDelegate;

@protocol HUControlView <NSObject>
+ (Class)valueClass;
@property(nonatomic, getter=isDisabled) _Bool disabled;
@property(retain, nonatomic) id value;
@property(nonatomic) __weak id <HUControlViewDelegate> delegate;
@property(copy, nonatomic) NSString *identifier;

@optional
@property(nonatomic) _Bool canBeHighlighted;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@end

