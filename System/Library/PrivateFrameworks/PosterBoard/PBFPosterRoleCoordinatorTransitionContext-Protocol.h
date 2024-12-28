//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoard/NSObject-Protocol.h>

@class NSCountedSet, NSDictionary, NSString, NSUUID, PRPosterConfiguration;
@protocol FCActivityDescribing;

@protocol PBFPosterRoleCoordinatorTransitionContext <NSObject>
@property(readonly, nonatomic) NSDictionary *pbf_extensionStoreCoordinatorForProvider;
- (PRPosterConfiguration *)pbf_currentActivePosterForRole:(NSString *)arg1;
- (NSUUID *)pbf_desiredActiveConfigurationForRole:(NSString *)arg1;
- (_Bool)pbf_transitionFromIncomingFocusModeChange;
- (_Bool)isInitialUpdate;
- (NSString *)pbf_activeChargerIdentifier;
- (id <FCActivityDescribing>)pbf_activeFocusMode;
- (NSUUID *)pbf_transitionContextIdentifier;

@optional
- (NSCountedSet *)pbf_transitionAffectedRoles;
@end
