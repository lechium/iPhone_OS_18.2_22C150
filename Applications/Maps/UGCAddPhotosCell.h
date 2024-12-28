//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MUButtonCellRowView, MUPlatterView, UIView;
@protocol UGCARPAddPhotosCellRequestDelegate;

@interface UGCAddPhotosCell
{
    MUButtonCellRowView *_buttonView;	// 8 = 0x8
    MUPlatterView *_platterView;	// 16 = 0x10
    id <UGCARPAddPhotosCellRequestDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000b57cae
@property(nonatomic) __weak id <UGCARPAddPhotosCellRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (id);	// IMP=0x0010000000b57c81
- (void)_addPhotosUsingSourceType:(long long)arg1;	// IMP=0x0010000000b57c36
@property(readonly, nonatomic) __weak UIView *anchoringView;
- (void)setupSubviews;	// IMP=0x0010000000b577dd
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000b5774f

@end
