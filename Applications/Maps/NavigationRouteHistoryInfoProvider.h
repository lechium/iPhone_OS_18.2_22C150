//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEORouteAttributes, HistoryEntryRecentsItem, MNNavigationService, NSData, NSString, NSUUID;

@interface NavigationRouteHistoryInfoProvider : NSObject
{
    MNNavigationService *_navigationService;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000007b3950
@property(retain, nonatomic) MNNavigationService *navigationService; // @synthesize navigationService=_navigationService;
@property(readonly, nonatomic) NSData *archivedTripSharingState;
@property(readonly, nonatomic) GEORouteAttributes *routeAttributes;
@property(readonly, nonatomic) NSUUID *currentHistoryEntryRouteIdentifier;
- (void)updateHistoryEntryRoute:(id)arg1;	// IMP=0x00100000007b359d
@property(readonly, nonatomic) HistoryEntryRecentsItem *historyEntryRoute;
- (id)auxiliaryTasksManager;	// IMP=0x00100000007b347b
@property(readonly, nonatomic) NSData *sessionState;
- (id)originalWaypointRouteRepresentation;	// IMP=0x00100000007b338a
- (id)legacyRouteRepresentation;	// IMP=0x00100000007b333a
- (id)routeId;	// IMP=0x00100000007b32ea
- (id)_composedRoute;	// IMP=0x00100000007b329a
- (id)initWithNavigationService:(id)arg1;	// IMP=0x00100000007b322f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

