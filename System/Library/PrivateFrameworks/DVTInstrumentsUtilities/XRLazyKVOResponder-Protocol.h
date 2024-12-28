//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DVTInstrumentsUtilities/NSObject-Protocol.h>

@class NSString, XRLazyKVOAdapter;

@protocol XRLazyKVOResponder <NSObject>
- (void)handleLazyKVOUpdate:(XRLazyKVOAdapter *)arg1;

@optional
- (void)prepareForLazyKVOUpdate:(XRLazyKVOAdapter *)arg1 object:(id)arg2 keyPath:(NSString *)arg3 context:(const void *)arg4;
@end
