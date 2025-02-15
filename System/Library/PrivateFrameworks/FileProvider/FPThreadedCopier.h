//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface FPThreadedCopier : NSObject
{
    long long _numberOfInflightCopies;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_bufferLimitSemaphore;	// 16 = 0x10
    NSMutableArray *_buffers;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_writeQueue;	// 32 = 0x20
}

+ (id)sharedCopier;	// IMP=0x004000000008307f
- (void).cxx_destruct;	// IMP=0x0000000000083ff0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue; // @synthesize writeQueue=_writeQueue;
@property(retain, nonatomic) NSMutableArray *buffers; // @synthesize buffers=_buffers;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *bufferLimitSemaphore; // @synthesize bufferLimitSemaphore=_bufferLimitSemaphore;
@property(nonatomic) long long numberOfInflightCopies; // @synthesize numberOfInflightCopies=_numberOfInflightCopies;
- (void)endOperation;	// IMP=0x0000000000083e07
- (void)beginOperation;	// IMP=0x0000000000083ba8
- (_Bool)finishReading:(int)arg1 writing:(int)arg2 error:(id *)arg3;	// IMP=0x0000000000083a5b
- (int)beginWriting:(id)arg1 overwriteDestination:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000839b6
- (int)beginReading:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000083925
- (_Bool)copy:(id)arg1 to:(id)arg2 overwriteDestination:(_Bool)arg3 progress:(id)arg4 error:(id *)arg5;	// IMP=0x000000000008316b
- (id)init;	// IMP=0x00000000000830d4

@end

