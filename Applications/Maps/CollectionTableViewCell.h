//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKTableViewCell.h>

@class CollectionView, NSString;
@protocol CollectionHandlerInfo;

@interface CollectionTableViewCell : MKTableViewCell
{
    CollectionView *_collectionView;	// 8 = 0x8
    _Bool _disabled;	// 16 = 0x10
    _Bool _showCheckmark;	// 17 = 0x11
    id <CollectionHandlerInfo> _collectionInfo;	// 24 = 0x18
    unsigned long long _collectionViewSize;	// 32 = 0x20
}

+ (double)estimatedCellHeight;	// IMP=0x00200000008ff022
+ (double)cellHeight;	// IMP=0x00100000008ff011
+ (id)identifier;	// IMP=0x00100000008ff004
- (void).cxx_destruct;	// IMP=0x00200000008ff76f
@property(nonatomic, getter=showsCheckmark) _Bool showCheckmark; // @synthesize showCheckmark=_showCheckmark;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) unsigned long long collectionViewSize; // @synthesize collectionViewSize=_collectionViewSize;
@property(retain, nonatomic) id <CollectionHandlerInfo> collectionInfo; // @synthesize collectionInfo=_collectionInfo;
- (void)createContent;	// IMP=0x00100000008ff1e7
- (id)_cellBackgroundColor;	// IMP=0x00100000008ff08d
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000008ff030

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
