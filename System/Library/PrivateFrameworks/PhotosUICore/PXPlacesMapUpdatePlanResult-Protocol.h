//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSSet;

@protocol PXPlacesMapUpdatePlanResult <NSObject>
@property(readonly) NSSet *overlaysToRemoveImmediately;
@property(readonly) NSSet *overlaysToAddImmediately;
@property(readonly) NSSet *annotationsWithUpdatedIndex;
@property(readonly) NSSet *annotationsToRedraw;
@property(readonly) NSSet *annotationsToRemoveAfterAnimationHasEnded;
@property(readonly) NSSet *annotationsToRemoveAfterAnimationHasStarted;
@property(readonly) NSSet *annotationsToRemoveImmediately;
@property(readonly) NSSet *annotationsToAddImmediately;
@end

