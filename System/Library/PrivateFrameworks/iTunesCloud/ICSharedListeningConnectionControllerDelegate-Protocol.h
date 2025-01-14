//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesCloud/NSObject-Protocol.h>

@class ICSharedListeningConnectionController, NSError, _ICLLProtocolMessage;

@protocol ICSharedListeningConnectionControllerDelegate <NSObject>
- (void)connectionController:(ICSharedListeningConnectionController *)arg1 connectionDidReceiveMessage:(_ICLLProtocolMessage *)arg2;
- (void)connectionController:(ICSharedListeningConnectionController *)arg1 didEncounterFatalError:(NSError *)arg2;
- (void)connectionController:(ICSharedListeningConnectionController *)arg1 connectionDidEndWithError:(NSError *)arg2;
- (void)connectionControllerConnectionDidStart:(ICSharedListeningConnectionController *)arg1;
@end

