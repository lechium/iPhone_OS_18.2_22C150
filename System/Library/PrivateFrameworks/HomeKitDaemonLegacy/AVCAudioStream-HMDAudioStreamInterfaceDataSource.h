//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/AVCAudioStream.h>

@class NSDictionary, NSString;
@protocol HMDAVCAudioStreamDelegate;

@interface AVCAudioStream (HMDAudioStreamInterfaceDataSource)

// Remaining properties
@property(readonly, nonatomic) NSDictionary *capabilities;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <HMDAVCAudioStreamDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(nonatomic) long long direction;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long streamToken;
@property(readonly) Class superclass;
@property(nonatomic) float volume;
@end

