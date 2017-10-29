//
//  NSObject+YUFile.h
//  YUKit<https://github.com/c6357/YUKit>
//
//  Created by BruceYu on 15/9/1.
//  Copyright (c) 2015年 BruceYu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (YUFile)


typedef void (^FileObjectBlock)(NSString* m_filePath,BOOL StatusCode);

/**
 *  <#Description#>
 *
 *  @param name <#name description#>
 *  @param ext  <#ext description#>
 *
 *  @return <#return value description#>
 */
+(NSString*)yu_fileStringWithName:(NSString*)name ext:(NSString*)ext;


/**
 *  <#Description#>
 *
 *  @param name <#name description#>
 *  @param ext  <#ext description#>
 *
 *  @return <#return value description#>
 */
+(NSDictionary*)yu_fileDictionaryWithName:(NSString*)name ext:(NSString*)ext;


/**
 *  <#Description#>
 *
 *  @param name <#name description#>
 *  @param ext  <#ext description#>
 *
 *  @return <#return value description#>
 */
+(NSArray*)yu_fileArrayWithName:(NSString*)name ext:(NSString*)ext;



/**
 * 文件名字修改 (默认在ZKFilePath 文件下操作)
 *
 * @param resourceFileName 原文件名
 *
 * @param name 新文件名
 *
 * @return (bool)
 **/
+(NSString*)yu_modifyFileName:(NSString*)resourceFileName NewFileName:(NSString*)name Path:(NSString*)path;



/**
 * 获取单个文件的大小
 *
 * @param filePath 文件的路径
 *
 * @return 返回文件大小
 **/
+(long long) yu_fileSizeAtPath:(NSString*) filePath;



/**
 *  遍历文件夹获得文件夹大小，
 *
 *  @param folderPath 文件夹的的路径
 *
 *  @return 返回文件夹大小(多少M)
 */
+ (float ) yu_folderSizeAtPath:(NSString*) folderPath;



/**
 * 读取file里面的所有文件路径
 *
 * @return 返回所有文件属性dic
 **/
+ (NSMutableArray*)yu_filePathInDocumentsDir:(NSString*)path;



/**
 * 创建需要保存文件到Documents的目录
 *
 * @param Directories 文件夹名字
 *
 * @return 返回创建成功的文件夹路径
 **/
+ (NSString*)yu_createDocumentsDirectoryWithName:(NSString*)Directories;



/**
 * 创建需要保存文件到tmp的目录
 *
 * @param Directories 文件夹名字
 *
 * @return 返回创建成功的文件夹路径
 **/
+ (NSString*)yu_createTempDirectoriesWithName:(NSString*)Directories;



/**
 * 删除沙盒 文件or文件夹
 *
 * @param FilePath 需要删除的文件路径
 *
 * @return 返回操作结果(bool)
 **/
+ (BOOL)yu_removeFileAtPath:(NSString*)FilePath;


@end
