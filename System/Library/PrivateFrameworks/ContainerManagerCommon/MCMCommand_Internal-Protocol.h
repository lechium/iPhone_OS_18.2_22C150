//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContainerManagerCommon/MCMCommand_XPC-Protocol.h>

@class MCMCommandContext;
@protocol MCMReply, MCMResultPromise;

@protocol MCMCommand_Internal <MCMCommand_XPC>
@property(readonly, nonatomic) id <MCMResultPromise> resultPromise;
@property(readonly, nonatomic) id <MCMReply> reply;
@property(readonly, nonatomic) MCMCommandContext *context;
@end

