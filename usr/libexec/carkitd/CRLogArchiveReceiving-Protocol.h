//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CRFileReceiver, NSURL;

@protocol CRLogArchiveReceiving <NSObject>
- (void)fileReceiverSession:(CRFileReceiver *)arg1 didSaveLogsAtURL:(NSURL *)arg2;
- (NSURL *)urlForSavingLogsForFileReceiverSession:(CRFileReceiver *)arg1;
@end

