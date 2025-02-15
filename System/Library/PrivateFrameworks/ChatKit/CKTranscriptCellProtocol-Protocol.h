//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKFullscreenEffectMessageFilter;

@protocol CKTranscriptCellProtocol <NSObject>
@property(nonatomic) _Bool isInReplyContext;
@property(nonatomic) _Bool isAnimatingInDarkEffect;
@property(nonatomic) double associatedItemOffset;
@property(nonatomic) double drawerPercentRevealed;
@property(nonatomic) struct CGRect contentAlignmentRect;
@property(nonatomic) BOOL orientation;
@property(nonatomic) _Bool wantsDrawerLayout;
- (void)clearFilters;
- (void)addFilter:(CKFullscreenEffectMessageFilter *)arg1;
- (void)performRevealAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)performReveal:(void (^)(void))arg1;
- (void)performHide:(void (^)(void))arg1;
- (void)performReload:(void (^)(void))arg1 completion:(void (^)(_Bool))arg2;
- (void)performRemoval:(void (^)(_Bool))arg1;
- (void)performInsertion:(void (^)(_Bool))arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForDrawer;
- (void)layoutSubviewsForContents;
@end

