//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKitUI/WFActionRemoteUserInterface-Protocol.h>

@class NSData, NSString;

@protocol WFShareActionUserInterface <WFActionRemoteUserInterface>
- (void)showWithArchivedItems:(NSData *)arg1 isContentManaged:(_Bool)arg2 extensionBundleIdentifier:(NSString *)arg3 extensionPointIdentifier:(NSString *)arg4 completionHandler:(void (^)(NSArray *, NSError *))arg5;
@end
