//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreNFC/NSObject-Protocol.h>

@class NFCTagReaderSession, NSArray, NSError;

@protocol NFCTagReaderSessionDelegate <NSObject>
- (void)tagReaderSession:(NFCTagReaderSession *)arg1 didInvalidateWithError:(NSError *)arg2;

@optional
- (void)tagReaderSession:(NFCTagReaderSession *)arg1 didDetectTags:(NSArray *)arg2;
- (void)tagReaderSessionDidBecomeActive:(NFCTagReaderSession *)arg1;
@end

