//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServicesCore/NSObject-Protocol.h>

@protocol PLXPCProxyCreating <NSObject>
- (id)_unboostingRemoteObjectProxy;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(void (^)(NSError *))arg1;
- (id)remoteObjectProxyWithErrorHandler:(void (^)(NSError *))arg1;

@optional
- (void)addBarrierBlock:(void (^)(void))arg1;
@end
