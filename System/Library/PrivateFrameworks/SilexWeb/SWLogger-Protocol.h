//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SilexWeb/NSObject-Protocol.h>

@class NSString;

@protocol SWLogger <NSObject>
- (void)logSensitive:(NSString *)arg1;
- (void)logError:(NSString *)arg1;
- (void)log:(NSString *)arg1;
- (void)bindValue:(NSString *)arg1 forKey:(NSString *)arg2;
@end
