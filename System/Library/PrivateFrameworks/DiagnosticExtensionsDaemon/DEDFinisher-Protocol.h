//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DiagnosticExtensionsDaemon/NSObject-Protocol.h>

@class DEDAttachmentGroup, DEDBugSession, DEDBugSessionConfiguration, NSData, NSString;

@protocol DEDFinisher <NSObject>
- (void)finishSession:(DEDBugSession *)arg1 withConfiguration:(DEDBugSessionConfiguration *)arg2;
- (id)initWithConfiguration:(DEDBugSessionConfiguration *)arg1 session:(DEDBugSession *)arg2;

@optional
- (void)writeData:(NSData *)arg1 filename:(NSString *)arg2;
- (void)didFinishAllCollections;
- (void)didAdoptAttachmentGroup:(DEDAttachmentGroup *)arg1;
- (void)didCollectAttachmentGroup:(DEDAttachmentGroup *)arg1;
- (void)didCancelCollectionOnExtension:(NSString *)arg1;
- (void)didStartCollectingDiagnosticExtensionWithIdentifier:(NSString *)arg1;
- (void)cleanup;
@end

