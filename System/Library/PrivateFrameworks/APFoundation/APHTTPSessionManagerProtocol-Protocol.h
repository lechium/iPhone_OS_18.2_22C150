//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class APHTTPSession, NSString;

@protocol APHTTPSessionManagerProtocol
@property(copy, nonatomic) CDUnknownBlockType createSessionBlock;
- (_Bool)invalidateService:(NSString *)arg1 andCancelTasks:(_Bool)arg2;
- (_Bool)cancelTasksForService:(NSString *)arg1 withCompletionHandler:(void (^)(void))arg2;
- (void)invalidateAllServicesAndCancelTasks:(_Bool)arg1;
- (APHTTPSession *)temporarySessionForService:(NSString *)arg1;
- (APHTTPSession *)sessionForService:(NSString *)arg1;
@end

