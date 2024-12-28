//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, UICollectionViewCellRegistration;
@protocol GEOTransitLine;

@interface TwoLinesTransitLineOutlineCellModel
{
    NSArray *_accessoryModels;	// 40 = 0x28
    id <GEOTransitLine> _transitLine;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000e83225
@property(readonly, nonatomic) id <GEOTransitLine> transitLine; // @synthesize transitLine=_transitLine;
- (id)accessoryModels;	// IMP=0x0010000000e831ff
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000e830d4
@property(readonly) unsigned long long hash;
- (id)initWithTransitLine:(id)arg1 accessoryModels:(id)arg2 backgroundModel:(id)arg3;	// IMP=0x0010000000e82ed4
@property(readonly, nonatomic) id homeCollectionItem;
@property(readonly, nonatomic) id homeDragAndDropObject;
@property(readonly, nonatomic) id homeActionObject;

// Remaining properties
@property(readonly, nonatomic) UICollectionViewCellRegistration *cellRegistration;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UICollectionViewCellRegistration",?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
