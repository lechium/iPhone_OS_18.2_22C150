//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;
@protocol VUIMultiPlayerDetailsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI36MultiViewPlayerHUDTemplateController
{
    MISSING_TYPE *notificationTimeout;	// 2298841928 = 0x89058b48
    MISSING_TYPE *notificationSubject;	// 1096489156 = 0x415b18c4
    MISSING_TYPE *cancellables;	// 1275129198 = 0x4c00ed6e
    MISSING_TYPE *focusedViewModelIdentifier;	// 2336755851 = 0x8b48108b
    MISSING_TYPE *shouldDismissOnSelect;	// 2303197421 = 0x894800ed
    MISSING_TYPE *contentsDidLoad;	// 1986622032 = 0x76697250
    MISSING_TYPE *didInteract;	// 1701667186 = 0x656d6172
    MISSING_TYPE *detailDelegate;	// 1448357747 = 0x56542f73
}

- (void).cxx_destruct;	// IMP=0x0000000000a66c67
- (void)collectionView:(id)arg1 dragSessionDidEnd:(id)arg2;	// IMP=0x0000000000a66b46
- (void)collectionView:(id)arg1 dragSessionWillBegin:(id)arg2;	// IMP=0x0000000000a66ad6
- (void)updateVisibleCellsWithPlaybackIdentifiers:(id)arg1;	// IMP=0x0000000000a669d5
- (void)updateWithSelectedPlaybackIdentifiers:(id)arg1 reloadingData:(_Bool)arg2;	// IMP=0x0000000000a6650a
- (void)vuiScrollViewDidScroll:(id)arg1;	// IMP=0x0000000000a6445f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a643e8
- (void)vui_viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000a63e40
- (void)vui_viewDidLoad;	// IMP=0x0000000000a63a8b
@property(nonatomic) __weak id <VUIMultiPlayerDetailsViewControllerDelegate> detailDelegate; // @synthesize detailDelegate;
@property(nonatomic, copy) CDUnknownBlockType didInteract;
@property(nonatomic, copy) CDUnknownBlockType contentsDidLoad;
@property(nonatomic, readonly) double contentsHeight;
@property(nonatomic, readonly) long long itemCount;

@end
