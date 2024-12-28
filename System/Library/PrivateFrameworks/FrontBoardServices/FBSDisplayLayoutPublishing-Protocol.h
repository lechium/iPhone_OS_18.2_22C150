//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/NSObject-Protocol.h>

@class FBSDisplayLayout, FBSDisplayLayoutElement, NSString;
@protocol BSInvalidatable, FBSDisplayLayoutPublisherObserving;

@protocol FBSDisplayLayoutPublishing <NSObject>
@property(readonly, nonatomic) FBSDisplayLayout *currentLayout;
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning;
@property(nonatomic) long long backlightLevel;
@property(nonatomic) long long interfaceOrientation;
- (void)remove:(id <FBSDisplayLayoutPublisherObserving>)arg1;
- (void)add:(id <FBSDisplayLayoutPublisherObserving>)arg1;
- (void)removeObserver:(id <FBSDisplayLayoutPublisherObserving>)arg1;
- (void)addObserver:(id <FBSDisplayLayoutPublisherObserving>)arg1;
- (void)flush;
- (id <BSInvalidatable>)transitionAssertionWithReason:(NSString *)arg1;
- (id <BSInvalidatable>)addElement:(FBSDisplayLayoutElement *)arg1;
@end
