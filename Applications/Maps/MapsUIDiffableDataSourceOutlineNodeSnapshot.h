//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IdentifierPath, NSArray, NSDictionary, NSString;
@protocol MapsUIDiffableDataSourceViewModel;

@interface MapsUIDiffableDataSourceOutlineNodeSnapshot : NSObject
{
    NSDictionary *_childMap;	// 8 = 0x8
    _Bool _expanded;	// 16 = 0x10
    IdentifierPath *_identifierPath;	// 24 = 0x18
    id <MapsUIDiffableDataSourceViewModel> _viewModel;	// 32 = 0x20
    NSArray *_childSnapshots;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000054e5c0
@property(readonly, nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(readonly, nonatomic) NSArray *childSnapshots; // @synthesize childSnapshots=_childSnapshots;
@property(readonly, nonatomic) id <MapsUIDiffableDataSourceViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) IdentifierPath *identifierPath; // @synthesize identifierPath=_identifierPath;
- (id)childSnapshotWithIdentifier:(id)arg1;	// IMP=0x001000000054e51b
- (id)nodeSnapshotAtIdentifierPath:(id)arg1;	// IMP=0x001000000054e430
- (_Bool)needsReloadFromPreviousItemSnapshot:(id)arg1;	// IMP=0x001000000054e387
@property(readonly, nonatomic) NSString *recursiveDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000054df16
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000054def5
- (id)initWithIdentifierPath:(id)arg1 viewModel:(id)arg2 childSnapshots:(id)arg3 expanded:(_Bool)arg4;	// IMP=0x001000000054dafc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end
