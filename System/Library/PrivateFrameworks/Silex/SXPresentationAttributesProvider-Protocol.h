//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class SXPresentationAttributes;
@protocol SXPresentationAttributesObserver;

@protocol SXPresentationAttributesProvider <NSObject>
@property(readonly, nonatomic) SXPresentationAttributes *presentationAttributes;
- (void)removeObserver:(id <SXPresentationAttributesObserver>)arg1;
- (void)addObserver:(id <SXPresentationAttributesObserver>)arg1;
@end
