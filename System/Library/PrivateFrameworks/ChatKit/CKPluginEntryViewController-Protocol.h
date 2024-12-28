//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class IMBalloonPluginDataSource, NSArray, NSString;
@protocol CKPluginEntryViewControllerDelegate, UICoordinateSpace;

@protocol CKPluginEntryViewController <NSObject>
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@optional
@property(readonly) _Bool loadedContentView;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R

@property(readonly) _Bool wantsEdgeToEdgeLayout;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R

@property(readonly) _Bool wantsClearButton;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R

@property(nonatomic) __weak id <CKPluginEntryViewControllerDelegate> entryViewDelegate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<CKPluginEntryViewControllerDelegate>",?,W,N

- (NSArray *)framesOfVisibleContentViewInCoordinateSpace:(id <UICoordinateSpace>)arg1;
- (void)performHostAppSuspend;
- (void)performHostAppResume;
- (void)didFinishAnimatedBoundsChange;
- (void)willAnimateBoundsChange;
- (void)payloadWillSave;
- (void)payloadWillClear;
- (NSString *)payloadBundleID;
- (void)payloadWillSend;
- (id)initWithDataSource:(IMBalloonPluginDataSource *)arg1 entryViewDelegate:(id <CKPluginEntryViewControllerDelegate>)arg2;
@end
