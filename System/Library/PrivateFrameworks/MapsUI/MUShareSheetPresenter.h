//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MUActivityViewController, MUPresentationOptions, NSString;
@protocol MUShareSheetPresenterDelegate, _MKPlaceItem;

__attribute__((visibility("hidden")))
@interface MUShareSheetPresenter : NSObject
{
    MUActivityViewController *_activityViewController;	// 8 = 0x8
    MUPresentationOptions *_presentationOptions;	// 16 = 0x10
    id <_MKPlaceItem> _placeItem;	// 24 = 0x18
    id <MUShareSheetPresenterDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000173faa
@property(nonatomic) __weak id <MUShareSheetPresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <_MKPlaceItem> placeItem; // @synthesize placeItem=_placeItem;
@property(readonly, nonatomic) MUPresentationOptions *presentationOptions; // @synthesize presentationOptions=_presentationOptions;
- (void)mapkitActivityViewController:(id)arg1 postCompletedActivityOfType:(id)arg2 completed:(_Bool)arg3;	// IMP=0x0000000000173ef5
- (void)mapkitActivityViewController:(id)arg1 preCompletedActivityOfType:(id)arg2 completed:(_Bool)arg3;	// IMP=0x0000000000173e7b
- (void)present;	// IMP=0x0000000000173a80
- (id)initWithPlaceItem:(id)arg1 presentationOptions:(id)arg2;	// IMP=0x00000000001739e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
