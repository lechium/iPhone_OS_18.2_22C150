//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SetupKit/NSObject-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol CUAuthenticatableServer <NSObject>
@property(nonatomic) int passwordType;
@property(copy, nonatomic) NSString *password;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType authShowPasswordHandler;
@property(copy, nonatomic) CDUnknownBlockType authHidePasswordHandler;
@property(copy, nonatomic) CDUnknownBlockType authCompletionHandler;
@end

