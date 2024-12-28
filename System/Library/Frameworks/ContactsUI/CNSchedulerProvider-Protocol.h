//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@class NSString;
@protocol CNReaderWriterScheduler, CNScheduler;

@protocol CNSchedulerProvider <NSObject>
@property(readonly, nonatomic) id <CNScheduler> immediateScheduler;
@property(readonly, nonatomic) id <CNScheduler> inlineScheduler;
@property(readonly, nonatomic) id <CNScheduler> mainThreadScheduler;
@property(readonly, nonatomic) id <CNScheduler> backgroundScheduler;
- (id <CNReaderWriterScheduler>)newReaderWriterSchedulerWithName:(NSString *)arg1;
- (id <CNScheduler>)newSynchronousSerialSchedulerWithName:(NSString *)arg1;
- (id <CNScheduler>)newSerialSchedulerWithName:(NSString *)arg1;
- (id <CNScheduler>)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1;
@end
