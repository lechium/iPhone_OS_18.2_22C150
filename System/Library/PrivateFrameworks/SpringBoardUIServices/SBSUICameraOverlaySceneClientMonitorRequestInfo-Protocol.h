//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/NSObject-Protocol.h>

@class BSAuditToken, FBSSceneIdentityToken, NSString;

@protocol SBSUICameraOverlaySceneClientMonitorRequestInfo <NSObject>
@property(readonly, nonatomic) NSString *overlayRequestingBundleIdentifier;
@property(readonly, nonatomic) int overlayRequestingPID;
@property(readonly, nonatomic) FBSSceneIdentityToken *overlayRequestingSceneIdentityToken;
@property(readonly, nonatomic) BSAuditToken *overlayRequestingProcessAuditToken;
@end
