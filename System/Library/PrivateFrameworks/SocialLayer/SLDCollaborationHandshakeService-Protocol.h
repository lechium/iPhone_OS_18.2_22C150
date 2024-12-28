//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSProgress, NSSet, NSString, NSURL, _SWCollaborationMetadata, _SWPersonIdentity;

@protocol SLDCollaborationHandshakeService
- (NSProgress *)verifySourceBundleIdentifierFromMetadata:(_SWCollaborationMetadata *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (NSProgress *)generateProofForIdentity:(_SWPersonIdentity *)arg1 collaborationIdentifier:(NSString *)arg2 reply:(void (^)(_SWPersonIdentityProof *, NSError *))arg3;
- (NSProgress *)removeParticipantIdentities:(NSSet *)arg1 withFileURL:(NSURL *)arg2 sandboxTokenData:(NSData *)arg3 metadata:(_SWCollaborationMetadata *)arg4 reply:(void (^)(_SWCollaborationMetadata *, NSError *))arg5;
- (NSProgress *)removeParticipantIdentities:(NSSet *)arg1 withMetadata:(_SWCollaborationMetadata *)arg2 reply:(void (^)(_SWCollaborationMetadata *, NSError *))arg3;
- (NSProgress *)addParticipantHandles:(NSSet *)arg1 withFileURL:(NSURL *)arg2 sandboxTokenData:(NSData *)arg3 metadata:(_SWCollaborationMetadata *)arg4 reply:(void (^)(_SWCollaborationMetadata *, NSError *))arg5;
- (NSProgress *)addParticipantHandles:(NSSet *)arg1 withMetadata:(_SWCollaborationMetadata *)arg2 reply:(void (^)(_SWCollaborationMetadata *, NSError *))arg3;
- (NSProgress *)startCollaborationWithFileURL:(NSURL *)arg1 sandboxTokenData:(NSData *)arg2 metadata:(_SWCollaborationMetadata *)arg3 participants:(NSSet *)arg4 reply:(void (^)(NSURL *, _SWCollaborationMetadata *, NSError *))arg5;
- (NSProgress *)startCollaborationWithMetadata:(_SWCollaborationMetadata *)arg1 participants:(NSSet *)arg2 reply:(void (^)(NSURL *, _SWCollaborationMetadata *, NSError *))arg3;
- (void)prepareConnectionWithReply:(void (^)(void))arg1;
@end
