//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class PXProgrammaticNavigationDestination;
@protocol PXProgrammaticNavigationParticipant;

@protocol PXProgrammaticNavigationParticipant <NSObject>
@property(readonly, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;
- (id <PXProgrammaticNavigationParticipant>)nextExistingParticipantOnRouteToDestination:(PXProgrammaticNavigationDestination *)arg1;
- (unsigned long long)routingOptionsForDestination:(PXProgrammaticNavigationDestination *)arg1;

@optional
- (void)provideViewControllersForDestination:(PXProgrammaticNavigationDestination *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(NSArray *, long long, NSError *))arg3;
- (void)navigateToDestination:(PXProgrammaticNavigationDestination *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(long long, NSError *))arg3;
@end
