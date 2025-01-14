//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class NSArray, SXComponentView;
@protocol SXComponentInteractionHandler;

@protocol SXComponentInteractionHandlerManager <NSObject>
- (NSArray *)interactionsForComponentView:(SXComponentView *)arg1 type:(unsigned long long)arg2;
- (NSArray *)interactionsForComponentView:(SXComponentView *)arg1;
- (SXComponentView *)componentViewForLocation:(struct CGPoint)arg1;
- (void)removeInteractionHandler:(id <SXComponentInteractionHandler>)arg1 componentView:(SXComponentView *)arg2;
- (void)addInteractionHandler:(id <SXComponentInteractionHandler>)arg1 componentView:(SXComponentView *)arg2 types:(unsigned long long)arg3;
@end

