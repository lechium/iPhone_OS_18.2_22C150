//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ManagedConfigurationUI/NSObject-Protocol.h>

@class NSSet;
@protocol DMCRFSnapshot;

@protocol DMCRFInteractionClient <NSObject>
- (void)doesUserWantToRestoreSnapshot:(id <DMCRFSnapshot>)arg1 withConflictingApps:(NSSet *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end
