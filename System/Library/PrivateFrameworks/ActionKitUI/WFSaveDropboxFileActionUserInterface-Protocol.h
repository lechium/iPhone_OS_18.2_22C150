//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKitUI/WFActionRemoteUserInterface-Protocol.h>

@class NSArray, NSString;

@protocol WFSaveDropboxFileActionUserInterface <WFActionRemoteUserInterface>
- (void)cancel;
- (void)showWithServiceName:(NSString *)arg1 input:(NSArray *)arg2 managedLevel:(unsigned long long)arg3 options:(unsigned long long)arg4 completionHandler:(void (^)(NSArray *, NSError *))arg5;
@end

