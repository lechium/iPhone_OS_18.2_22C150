//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, UICollectionViewCell;

__attribute__((visibility("hidden")))
@interface UICollectionViewReorderedItem : NSObject
{
    UICollectionViewCell *_cell;	// 8 = 0x8
    NSIndexPath *_originalIndexPath;	// 16 = 0x10
    NSIndexPath *_targetIndexPath;	// 24 = 0x18
    _Bool _isUncommitted;	// 32 = 0x20
    NSIndexPath *_lastCommittedIndexPath;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000072934b
@property(readonly, nonatomic) _Bool isUncommitted; // @synthesize isUncommitted=_isUncommitted;
@property(readonly, nonatomic) NSIndexPath *lastCommittedIndexPath; // @synthesize lastCommittedIndexPath=_lastCommittedIndexPath;
@property(retain, nonatomic) NSIndexPath *targetIndexPath; // @synthesize targetIndexPath=_targetIndexPath;
@property(retain, nonatomic) NSIndexPath *originalIndexPath; // @synthesize originalIndexPath=_originalIndexPath;
@property(readonly, nonatomic) UICollectionViewCell *cell; // @synthesize cell=_cell;
- (_Bool)isNOOP;	// IMP=0x00000000007292ec
- (id)description;	// IMP=0x00000000007291bc
- (void)commitTargetIndexPath;	// IMP=0x0000000000729185
- (id)expectedCellIndexPath;	// IMP=0x000000000072907e
- (id)initWithCell:(id)arg1 indexPath:(id)arg2;	// IMP=0x0000000000728fe8

@end
