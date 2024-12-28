//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface Main : NSObject
{
    NSString *_path;	// 8 = 0x8
    NSString *_fileName;	// 16 = 0x10
    void *_zip;	// 24 = 0x18
}

+ (id)dateWithMicrosoftDOSFormat:(unsigned int)arg1;	// IMP=0x00600000000167d0
+ (_Bool)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2 keepParentDirectory:(_Bool)arg3;	// IMP=0x0060000000015750
+ (_Bool)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2;	// IMP=0x00600000000156c0
+ (_Bool)createZipFileAtPath:(id)arg1 withFilesAtPaths:(id)arg2;	// IMP=0x00600000000153e0
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(_Bool)arg3 password:(id)arg4 error:(id *)arg5 delegate:(id)arg6 progressHandler:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x00600000000137b0
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00600000000136a0
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(_Bool)arg3 password:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0060000000013550
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(_Bool)arg3 password:(id)arg4 error:(id *)arg5 delegate:(id)arg6;	// IMP=0x0060000000013420
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 delegate:(id)arg3;	// IMP=0x0060000000013340
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(_Bool)arg3 password:(id)arg4 error:(id *)arg5;	// IMP=0x0060000000013240
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2;	// IMP=0x00600000000131b0
- (void).cxx_destruct;	// IMP=0x00000000000169f0
@property(readonly, nonatomic) _Bool close;
- (_Bool)writeData:(id)arg1 fileName:(id)arg2;	// IMP=0x00000000000165b0
- (_Bool)writeFileAtPath:(id)arg1 withFileName:(id)arg2;	// IMP=0x0000000000016180
- (_Bool)writeFile:(id)arg1;	// IMP=0x0000000000016110
- (_Bool)writeFolderAtPath:(id)arg1 withFolderName:(id)arg2;	// IMP=0x0000000000015e00
- (void)zipInformation:(CDStruct_192a48cb *)arg1 setDate:(id)arg2;	// IMP=0x0000000000015cb0
@property(readonly, nonatomic) _Bool open;
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000015b70

@end
