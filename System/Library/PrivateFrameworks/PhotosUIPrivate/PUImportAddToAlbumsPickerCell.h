//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class NSArray, NSLayoutConstraint, UIImage, UIImageView, UILabel;
@protocol PXDisplayCollection;

__attribute__((visibility("hidden")))
@interface PUImportAddToAlbumsPickerCell : UITableViewCell
{
    _Bool _isPerformingUpdate;	// 8 = 0x8
    UIImageView *_thumbnailView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    unsigned long long _type;	// 32 = 0x20
    id <PXDisplayCollection> _collection;	// 40 = 0x28
    UIImage *_thumbnail;	// 48 = 0x30
    NSArray *_constraints;	// 56 = 0x38
    NSLayoutConstraint *_labelLeadingConstraintNoImage;	// 64 = 0x40
    NSLayoutConstraint *_labelLeadingConstraintWithImage;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000002f5fef
@property(retain, nonatomic) NSLayoutConstraint *labelLeadingConstraintWithImage; // @synthesize labelLeadingConstraintWithImage=_labelLeadingConstraintWithImage;
@property(retain, nonatomic) NSLayoutConstraint *labelLeadingConstraintNoImage; // @synthesize labelLeadingConstraintNoImage=_labelLeadingConstraintNoImage;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(readonly, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, nonatomic) id <PXDisplayCollection> collection; // @synthesize collection=_collection;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
- (_Bool)isSelectable;	// IMP=0x00000000002f5ee9
- (void)updateTitle;	// IMP=0x00000000002f5d93
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000002f5d2f
- (void)setThumbnail:(id)arg1;	// IMP=0x00000000002f5c99
- (void)setType:(unsigned long long)arg1;	// IMP=0x00000000002f5b35
- (void)setCollection:(id)arg1;	// IMP=0x00000000002f5aa0
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x00000000002f5a06
- (id)mutableChangeObject;	// IMP=0x00000000002f59fd
- (void)updateConstraints;	// IMP=0x00000000002f57ad
- (void)prepareForReuse;	// IMP=0x00000000002f564a
- (void)_configureCell;	// IMP=0x00000000002f4bf6
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000002f4b80

@end
