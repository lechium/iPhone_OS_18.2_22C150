//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString;

@protocol TITextCheckerSupport <NSObject>
- (void)appendWordToTextCheckerLocalDictionary:(NSString *)arg1;
- (void)requestTextCheckerLocalDictionaryWithCompletionHandler:(void (^)(NSData *))arg1;
- (void)string:(NSString *)arg1 isExemptFromTextCheckerWithCompletionHandler:(void (^)(_Bool))arg2;
@end
