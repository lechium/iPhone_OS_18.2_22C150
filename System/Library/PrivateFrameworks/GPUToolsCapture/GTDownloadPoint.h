//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTDownloadContext;
@protocol MTLCommandQueue, MTLSharedEvent;

@interface GTDownloadPoint : NSObject
{
    GTDownloadContext *_downloadContext;	// 8 = 0x8
    unsigned long long downloadValue;	// 16 = 0x10
    id <MTLSharedEvent> downloadEvent;	// 24 = 0x18
    id <MTLCommandQueue> _downloadQueue;	// 32 = 0x20
    unsigned long long waitValue;	// 40 = 0x28
    id <MTLSharedEvent> waitEvent;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000b2c51
@property(retain, nonatomic) id <MTLSharedEvent> waitEvent; // @synthesize waitEvent;
@property(nonatomic) unsigned long long waitValue; // @synthesize waitValue;
@property(retain, nonatomic) id <MTLCommandQueue> downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(retain, nonatomic) id <MTLSharedEvent> downloadEvent; // @synthesize downloadEvent;
@property(nonatomic) unsigned long long downloadValue; // @synthesize downloadValue;
@property(readonly, nonatomic) GTDownloadContext *downloadContext; // @synthesize downloadContext=_downloadContext;
- (void)createContext:(struct apr_array_header_t *)arg1;	// IMP=0x00000000000b2b8c

@end

