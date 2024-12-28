//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImage, UIImageView, UITapGestureRecognizer;
@protocol CKSharedContentsCollectionViewCellDelegate;

__attribute__((visibility("hidden")))
@interface CKSharedContentsCollectionViewCell
{
    _Bool _editing;	// 8 = 0x8
    UIImage *_previewImage;	// 16 = 0x10
    UIImageView *_checkmarkView;	// 24 = 0x18
    id <CKSharedContentsCollectionViewCellDelegate> _delegate;	// 32 = 0x20
    UITapGestureRecognizer *_tapGestureRecognizer;	// 40 = 0x28
}

+ (id)reuseIdentifier;	// IMP=0x00100000003dc522
- (void).cxx_destruct;	// IMP=0x00000000003dcc50
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) __weak id <CKSharedContentsCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000003dcb37
- (void)toggleCheckmarkViewWithEnabled:(_Bool)arg1;	// IMP=0x00000000003dc9e5
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000003dc92e
- (void)handleTap:(id)arg1;	// IMP=0x00000000003dc8e2
- (void)saveAttachment:(id)arg1;	// IMP=0x00000000003dc891
- (void)more:(id)arg1;	// IMP=0x00000000003dc840
- (void)delete:(id)arg1;	// IMP=0x00000000003dc7ef
- (void)copy:(id)arg1;	// IMP=0x00000000003dc79e
- (void)layoutSubviews;	// IMP=0x00000000003dc635
- (void)setupTapGestureRecognizer;	// IMP=0x00000000003dc58c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003dc52f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
