//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSSafariSandboxBrokerProtocol-Protocol.h>

@class NSString;

@protocol WBSUISafariSandboxBrokerProtocol <WBSSafariSandboxBrokerProtocol>
- (void)loadLinkPresentationMetdataForMessageWithGUID:(NSString *)arg1 completionHandler:(void (^)(NSString *, UIImage *, NSError *))arg2;

@optional
- (void)getLinkMetadataForMessageWithGUID:(NSString *)arg1 completionHandler:(void (^)(LPLinkMetadata *, NSError *))arg2;
@end

